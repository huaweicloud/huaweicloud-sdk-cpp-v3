
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetsInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetsInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/CriterionSetListV2Body.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CriterionSetsInfo
    : public ModelBase
{
public:
    CriterionSetsInfo();
    virtual ~CriterionSetsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CriterionSetsInfo members

    /// <summary>
    /// **参数解释：** 规则列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<CriterionSetListV2Body>& getCriterionSetList();
    bool criterionSetListIsSet() const;
    void unsetcriterionSetList();
    void setCriterionSetList(const std::vector<CriterionSetListV2Body>& value);

    /// <summary>
    /// **参数解释：** 规则总数。 **取值范围：** ≥0
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<CriterionSetListV2Body> criterionSetList_;
    bool criterionSetListIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetsInfo_H_
