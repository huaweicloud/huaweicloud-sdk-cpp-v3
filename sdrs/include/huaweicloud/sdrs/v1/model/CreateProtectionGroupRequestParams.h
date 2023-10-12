
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建保护组请求体结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateProtectionGroupRequestParams
    : public ModelBase
{
public:
    CreateProtectionGroupRequestParams();
    virtual ~CreateProtectionGroupRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProtectionGroupRequestParams members

    /// <summary>
    /// 指定保护组的名称，最大支持长度为64个字节。只包含中文字符、英文字母（a～ｚ、Ａ～Ｚ）、数字（０~９）、小数点（．）、下划线（_）、中划线（-）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指定保护组的描述，最大支持长度为64个字节。不能包含左尖括号（&lt;）或右尖括号（&gt;）。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 指定保护组的生产站点可用区名称。
    /// </summary>

    std::string getSourceAvailabilityZone() const;
    bool sourceAvailabilityZoneIsSet() const;
    void unsetsourceAvailabilityZone();
    void setSourceAvailabilityZone(const std::string& value);

    /// <summary>
    /// 指定保护组的容灾站点可用区名称。
    /// </summary>

    std::string getTargetAvailabilityZone() const;
    bool targetAvailabilityZoneIsSet() const;
    void unsettargetAvailabilityZone();
    void setTargetAvailabilityZone(const std::string& value);

    /// <summary>
    /// 指定双活域的ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 生产站点虚拟私有云ID。
    /// </summary>

    std::string getSourceVpcId() const;
    bool sourceVpcIdIsSet() const;
    void unsetsourceVpcId();
    void setSourceVpcId(const std::string& value);

    /// <summary>
    /// 部署模式。默认值为“migration”，migration表示VPC内迁移。
    /// </summary>

    std::string getDrType() const;
    bool drTypeIsSet() const;
    void unsetdrType();
    void setDrType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string sourceAvailabilityZone_;
    bool sourceAvailabilityZoneIsSet_;
    std::string targetAvailabilityZone_;
    bool targetAvailabilityZoneIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string sourceVpcId_;
    bool sourceVpcIdIsSet_;
    std::string drType_;
    bool drTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestParams_H_
