
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ParamInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ParamInfo_H_


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
/// 任务详情
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ParamInfo
    : public ModelBase
{
public:
    ParamInfo();
    virtual ~ParamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParamInfo members

    /// <summary>
    /// 仓库地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 仓库分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 仓库语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 排除的目录
    /// </summary>

    std::string getExcludeDir() const;
    bool excludeDirIsSet() const;
    void unsetexcludeDir();
    void setExcludeDir(const std::string& value);

    /// <summary>
    /// 编码格式
    /// </summary>

    std::string getEncode() const;
    bool encodeIsSet() const;
    void unsetencode();
    void setEncode(const std::string& value);

    /// <summary>
    /// 编译配置信息
    /// </summary>

    std::string getCompileConfig() const;
    bool compileConfigIsSet() const;
    void unsetcompileConfig();
    void setCompileConfig(const std::string& value);

    /// <summary>
    /// g规则集名称
    /// </summary>

    std::string getRuleTemplate() const;
    bool ruleTemplateIsSet() const;
    void unsetruleTemplate();
    void setRuleTemplate(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string excludeDir_;
    bool excludeDirIsSet_;
    std::string encode_;
    bool encodeIsSet_;
    std::string compileConfig_;
    bool compileConfigIsSet_;
    std::string ruleTemplate_;
    bool ruleTemplateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ParamInfo_H_
