
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesRequest_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListRulesRequest
    : public ModelBase
{
public:
    ListRulesRequest();
    virtual ~ListRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRulesRequest members

    /// <summary>
    /// 规则对应的语言
    /// </summary>

    std::string getRuleLanguages() const;
    bool ruleLanguagesIsSet() const;
    void unsetruleLanguages();
    void setRuleLanguages(const std::string& value);

    /// <summary>
    /// 缺陷等级，0致命，1严重，2一般，3提示
    /// </summary>

    std::string getRuleSeverity() const;
    bool ruleSeverityIsSet() const;
    void unsetruleSeverity();
    void setRuleSeverity(const std::string& value);

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
    std::string ruleLanguages_;
    bool ruleLanguagesIsSet_;
    std::string ruleSeverity_;
    bool ruleSeverityIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesRequest_H_
