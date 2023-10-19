
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDomainSetInfoDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDomainSetInfoDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateDomainSetInfoDto
    : public ModelBase
{
public:
    UpdateDomainSetInfoDto();
    virtual ~UpdateDomainSetInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainSetInfoDto members

    /// <summary>
    /// 域名组名称UUID
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 域名组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 域名组类型，0表示URL过滤，1表示地址解析
    /// </summary>

    int32_t getDomainSetType() const;
    bool domainSetTypeIsSet() const;
    void unsetdomainSetType();
    void setDomainSetType(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string setId_;
    bool setIdIsSet_;
    int32_t domainSetType_;
    bool domainSetTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDomainSetInfoDto_H_
