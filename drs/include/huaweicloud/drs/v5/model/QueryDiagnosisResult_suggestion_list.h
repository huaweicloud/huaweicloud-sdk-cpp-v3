
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_suggestion_list_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_suggestion_list_H_


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
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDiagnosisResult_suggestion_list
    : public ModelBase
{
public:
    QueryDiagnosisResult_suggestion_list();
    virtual ~QueryDiagnosisResult_suggestion_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDiagnosisResult_suggestion_list members

    /// <summary>
    /// 诊断建议内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_suggestion_list_H_
