
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BusinessPartner_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BusinessPartner_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务商信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BusinessPartner
    : public ModelBase
{
public:
    BusinessPartner();
    virtual ~BusinessPartner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessPartner members

    /// <summary>
    /// 服务商ID。
    /// </summary>

    std::string getBpDomainId() const;
    bool bpDomainIdIsSet() const;
    void unsetbpDomainId();
    void setBpDomainId(const std::string& value);

    /// <summary>
    /// 服务商名称。
    /// </summary>

    std::string getBpName() const;
    bool bpNameIsSet() const;
    void unsetbpName();
    void setBpName(const std::string& value);

    /// <summary>
    /// 优先级，整数取值范围1-100，数值越小优先级越高。
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// 是否是国际站服务商。
    /// </summary>

    bool isInternational() const;
    bool internationalIsSet() const;
    void unsetinternational();
    void setInternational(bool value);


protected:
    std::string bpDomainId_;
    bool bpDomainIdIsSet_;
    std::string bpName_;
    bool bpNameIsSet_;
    int32_t order_;
    bool orderIsSet_;
    bool international_;
    bool internationalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BusinessPartner_H_
