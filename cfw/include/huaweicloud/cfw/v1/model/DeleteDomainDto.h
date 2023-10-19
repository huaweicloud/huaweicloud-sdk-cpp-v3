
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteDomainDto
    : public ModelBase
{
public:
    DeleteDomainDto();
    virtual ~DeleteDomainDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDomainDto members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 域名组id
    /// </summary>

    std::string getDomainSetId() const;
    bool domainSetIdIsSet() const;
    void unsetdomainSetId();
    void setDomainSetId(const std::string& value);

    /// <summary>
    /// 域名地址组
    /// </summary>

    std::vector<std::string>& getDomainAddressIds();
    bool domainAddressIdsIsSet() const;
    void unsetdomainAddressIds();
    void setDomainAddressIds(const std::vector<std::string>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string domainSetId_;
    bool domainSetIdIsSet_;
    std::vector<std::string> domainAddressIds_;
    bool domainAddressIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainDto_H_
