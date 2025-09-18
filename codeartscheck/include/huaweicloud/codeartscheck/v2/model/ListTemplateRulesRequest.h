
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListTemplateRulesRequest
    : public ModelBase
{
public:
    ListTemplateRulesRequest();
    virtual ~ListTemplateRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateRulesRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 规则集ID
    /// </summary>

    std::string getRulesetId() const;
    bool rulesetIdIsSet() const;
    void unsetrulesetId();
    void setRulesetId(const std::string& value);

    /// <summary>
    /// 规则状态  &#39;1查询全部，2已启动，3未启用&#39;
    /// </summary>

    std::string getTypes() const;
    bool typesIsSet() const;
    void unsettypes();
    void setTypes(const std::string& value);

    /// <summary>
    /// 规则语言
    /// </summary>

    std::string getLanguages() const;
    bool languagesIsSet() const;
    void unsetlanguages();
    void setLanguages(const std::string& value);

    /// <summary>
    /// 规则所属标签
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 分页索引，偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string rulesetId_;
    bool rulesetIdIsSet_;
    std::string types_;
    bool typesIsSet_;
    std::string languages_;
    bool languagesIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplateRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplateRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesRequest_H_
