
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_AcceleratorDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_AcceleratorDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/ConfigStatus.h>
#include <huaweicloud/ga/v1/model/AccelerateIp.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/ga/v1/model/FrozenInfo.h>
#include <huaweicloud/ga/v1/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全球加速器实例。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  AcceleratorDetail
    : public ModelBase
{
public:
    AcceleratorDetail();
    virtual ~AcceleratorDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AcceleratorDetail members

    /// <summary>
    /// 全球加速器ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 全球加速器名称，取值范围：1~64个字符之间，只能由数字、字母、中划线和中文组成。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 全球加速器描述信息，取值范围：0~255个字符之间，禁止输入字符：&lt;&gt;。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ConfigStatus& value);

    /// <summary>
    /// 全球加速器IP列表。
    /// </summary>

    std::vector<AccelerateIp>& getIpSets();
    bool ipSetsIsSet() const;
    void unsetipSets();
    void setIpSets(const std::vector<AccelerateIp>& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户的企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 规格ID。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FrozenInfo getFrozenInfo() const;
    bool frozenInfoIsSet() const;
    void unsetfrozenInfo();
    void setFrozenInfo(const FrozenInfo& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ConfigStatus status_;
    bool statusIsSet_;
    std::vector<AccelerateIp> ipSets_;
    bool ipSetsIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    FrozenInfo frozenInfo_;
    bool frozenInfoIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_AcceleratorDetail_H_
