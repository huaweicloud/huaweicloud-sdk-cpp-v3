
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateLogConfigRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateLogConfigRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/LtsConfigRequestAndResponse.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  UpdateLogConfigRequest
    : public ModelBase
{
public:
    UpdateLogConfigRequest();
    virtual ~UpdateLogConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogConfigRequest members

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LtsConfigRequestAndResponse getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LtsConfigRequestAndResponse& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    LtsConfigRequestAndResponse body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLogConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLogConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateLogConfigRequest_H_
