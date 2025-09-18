
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticSeverityV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticSeverityV2_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  StatisticSeverityV2
    : public ModelBase
{
public:
    StatisticSeverityV2();
    virtual ~StatisticSeverityV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticSeverityV2 members

    /// <summary>
    /// 致命问题数
    /// </summary>

    int32_t getCritical() const;
    bool criticalIsSet() const;
    void unsetcritical();
    void setCritical(int32_t value);

    /// <summary>
    /// 严重问题数
    /// </summary>

    int32_t getMajor() const;
    bool majorIsSet() const;
    void unsetmajor();
    void setMajor(int32_t value);

    /// <summary>
    /// 一般问题数
    /// </summary>

    int32_t getMinor() const;
    bool minorIsSet() const;
    void unsetminor();
    void setMinor(int32_t value);

    /// <summary>
    /// 提示问题数
    /// </summary>

    int32_t getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(int32_t value);


protected:
    int32_t critical_;
    bool criticalIsSet_;
    int32_t major_;
    bool majorIsSet_;
    int32_t minor_;
    bool minorIsSet_;
    int32_t suggestion_;
    bool suggestionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticSeverityV2_H_
