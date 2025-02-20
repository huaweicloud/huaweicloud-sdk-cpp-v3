
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_diagnosis_results_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_diagnosis_results_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/QueryDiagnosisResult_item.h>
#include <huaweicloud/drs/v5/model/QueryDiagnosisResult_result_list.h>
#include <huaweicloud/drs/v5/model/QueryDiagnosisResult_suggestion_list.h>
#include <vector>

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
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDiagnosisResult_diagnosis_results
    : public ModelBase
{
public:
    QueryDiagnosisResult_diagnosis_results();
    virtual ~QueryDiagnosisResult_diagnosis_results();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDiagnosisResult_diagnosis_results members

    /// <summary>
    /// 
    /// </summary>

    QueryDiagnosisResult_item getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const QueryDiagnosisResult_item& value);

    /// <summary>
    /// 诊断项状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 诊断结果。
    /// </summary>

    std::vector<QueryDiagnosisResult_result_list>& getResultList();
    bool resultListIsSet() const;
    void unsetresultList();
    void setResultList(const std::vector<QueryDiagnosisResult_result_list>& value);

    /// <summary>
    /// 诊断建议。
    /// </summary>

    std::vector<QueryDiagnosisResult_suggestion_list>& getSuggestionList();
    bool suggestionListIsSet() const;
    void unsetsuggestionList();
    void setSuggestionList(const std::vector<QueryDiagnosisResult_suggestion_list>& value);

    /// <summary>
    /// 诊断项得分。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// 完成时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    QueryDiagnosisResult_item item_;
    bool itemIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::vector<QueryDiagnosisResult_result_list> resultList_;
    bool resultListIsSet_;
    std::vector<QueryDiagnosisResult_suggestion_list> suggestionList_;
    bool suggestionListIsSet_;
    int32_t score_;
    bool scoreIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_diagnosis_results_H_
