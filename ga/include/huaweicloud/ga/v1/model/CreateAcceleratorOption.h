
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/CreateAcceleratorOption_ip_sets.h>
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
/// 创建全球加速器实例的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateAcceleratorOption
    : public ModelBase
{
public:
    CreateAcceleratorOption();
    virtual ~CreateAcceleratorOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAcceleratorOption members

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
    /// 全球加速器IP列表。
    /// </summary>

    std::vector<CreateAcceleratorOption_ip_sets>& getIpSets();
    bool ipSetsIsSet() const;
    void unsetipSets();
    void setIpSets(const std::vector<CreateAcceleratorOption_ip_sets>& value);

    /// <summary>
    /// 租户的企业项目ID，最大长度36个字符，带\&quot;-\&quot;连字符的UUID格式，或者是字符串\&quot;0\&quot;。\&quot;0\&quot;表示默认企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CreateAcceleratorOption_ip_sets> ipSets_;
    bool ipSetsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorOption_H_
