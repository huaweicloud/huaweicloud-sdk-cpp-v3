
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportIpBlacklistRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportIpBlacklistRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/IpBlacklistImportDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ImportIpBlacklistRequest
    : public ModelBase
{
public:
    ImportIpBlacklistRequest();
    virtual ~ImportIpBlacklistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportIpBlacklistRequest members

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IpBlacklistImportDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IpBlacklistImportDto& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    IpBlacklistImportDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ImportIpBlacklistRequest& dereference_from_shared_ptr(std::shared_ptr<ImportIpBlacklistRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ImportIpBlacklistRequest_H_
