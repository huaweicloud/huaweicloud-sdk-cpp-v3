
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PublisherRequest
    : public ModelBase
{
public:
    PublisherRequest();
    virtual ~PublisherRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublisherRequest members

    /// <summary>
    /// **参数解释**： 发布商名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商描述。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商图标URL。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getLogoUrl() const;
    bool logoUrlIsSet() const;
    void unsetlogoUrl();
    void setLogoUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商网页地址。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getWebsite() const;
    bool websiteIsSet() const;
    void unsetwebsite();
    void setWebsite(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商帮助地址。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSupportUrl() const;
    bool supportUrlIsSet() const;
    void unsetsupportUrl();
    void setSupportUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商源码地址。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSourceUrl() const;
    bool sourceUrlIsSet() const;
    void unsetsourceUrl();
    void setSourceUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商英文名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEnName() const;
    bool enNameIsSet() const;
    void unsetenName();
    void setEnName(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商ID。可通过[查询发布商详情](ShowPublisher.xml)查询。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPublisherUniqueId() const;
    bool publisherUniqueIdIsSet() const;
    void unsetpublisherUniqueId();
    void setPublisherUniqueId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string logoUrl_;
    bool logoUrlIsSet_;
    std::string website_;
    bool websiteIsSet_;
    std::string supportUrl_;
    bool supportUrlIsSet_;
    std::string sourceUrl_;
    bool sourceUrlIsSet_;
    std::string enName_;
    bool enNameIsSet_;
    std::string publisherUniqueId_;
    bool publisherUniqueIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherRequest_H_
