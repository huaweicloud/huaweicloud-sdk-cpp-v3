
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HbaHistoryResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HbaHistoryResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/HbaConfResult.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  HbaHistoryResult
    : public ModelBase
{
public:
    HbaHistoryResult();
    virtual ~HbaHistoryResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HbaHistoryResult members

    /// <summary>
    /// **参数解释**: 修改结果。 **取值范围**:  - success：已生效。  - failed：未生效。  - etting：设置中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改时间。 **取值范围**: 不涉及。
    /// </summary>

    utility::datetime getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const utility::datetime& value);

    /// <summary>
    /// **参数解释**: 修改失败原因。 **取值范围**: 不涉及。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改之前的值。
    /// </summary>

    std::vector<HbaConfResult>& getBeforeConfs();
    bool beforeConfsIsSet() const;
    void unsetbeforeConfs();
    void setBeforeConfs(const std::vector<HbaConfResult>& value);

    /// <summary>
    /// **参数解释**: 修改之后的值。
    /// </summary>

    std::vector<HbaConfResult>& getAfterConfs();
    bool afterConfsIsSet() const;
    void unsetafterConfs();
    void setAfterConfs(const std::vector<HbaConfResult>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    utility::datetime time_;
    bool timeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::vector<HbaConfResult> beforeConfs_;
    bool beforeConfsIsSet_;
    std::vector<HbaConfResult> afterConfs_;
    bool afterConfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HbaHistoryResult_H_
