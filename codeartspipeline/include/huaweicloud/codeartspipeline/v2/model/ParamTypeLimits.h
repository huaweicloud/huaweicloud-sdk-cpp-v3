
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ParamTypeLimits_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ParamTypeLimits_H_


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
/// CodeCheck任务语言参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ParamTypeLimits
    : public ModelBase
{
public:
    ParamTypeLimits();
    virtual ~ParamTypeLimits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParamTypeLimits members

    /// <summary>
    /// 是否废弃
    /// </summary>

    std::string getDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(const std::string& value);

    /// <summary>
    /// 语言名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 语言展示名字
    /// </summary>

    std::string getDisplayname() const;
    bool displaynameIsSet() const;
    void unsetdisplayname();
    void setDisplayname(const std::string& value);

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 扫描语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string disable_;
    bool disableIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string displayname_;
    bool displaynameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ParamTypeLimits_H_
