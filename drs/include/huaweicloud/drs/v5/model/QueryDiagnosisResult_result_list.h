
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_result_list_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_result_list_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDiagnosisResult_result_list
    : public ModelBase
{
public:
    QueryDiagnosisResult_result_list();
    virtual ~QueryDiagnosisResult_result_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDiagnosisResult_result_list members

    /// <summary>
    /// 内容key。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 结果值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 结果值是否需要国际化。
    /// </summary>

    bool isIsMultiLanguage() const;
    bool isMultiLanguageIsSet() const;
    void unsetisMultiLanguage();
    void setIsMultiLanguage(bool value);

    /// <summary>
    /// 模块名称。
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 等级。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool isMultiLanguage_;
    bool isMultiLanguageIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string level_;
    bool levelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_result_list_H_
