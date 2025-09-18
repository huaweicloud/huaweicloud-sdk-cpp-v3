
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordIssueCountsInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordIssueCountsInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CheckRecordIssueCountsInfo
    : public ModelBase
{
public:
    CheckRecordIssueCountsInfo();
    virtual ~CheckRecordIssueCountsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckRecordIssueCountsInfo members

    /// <summary>
    /// 致命问题
    /// </summary>

    int32_t getCritical() const;
    bool criticalIsSet() const;
    void unsetcritical();
    void setCritical(int32_t value);

    /// <summary>
    /// 严重问题
    /// </summary>

    int32_t getSerious() const;
    bool seriousIsSet() const;
    void unsetserious();
    void setSerious(int32_t value);

    /// <summary>
    /// 常规问题
    /// </summary>

    int32_t getNormal() const;
    bool normalIsSet() const;
    void unsetnormal();
    void setNormal(int32_t value);

    /// <summary>
    /// 提示问题
    /// </summary>

    int32_t getPrompt() const;
    bool promptIsSet() const;
    void unsetprompt();
    void setPrompt(int32_t value);


protected:
    int32_t critical_;
    bool criticalIsSet_;
    int32_t serious_;
    bool seriousIsSet_;
    int32_t normal_;
    bool normalIsSet_;
    int32_t prompt_;
    bool promptIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordIssueCountsInfo_H_
