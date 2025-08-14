
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRulesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRulesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/RuleResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRulesResponse();
    virtual ~ListRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRulesResponse members

    /// <summary>
    /// 本次分页查询结果中最后一条记录的ID，可在下一次分页查询时使用。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 满足查询条件的记录总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 规则信息列表。
    /// </summary>

    std::vector<RuleResponse>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<RuleResponse>& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int64_t count_;
    bool countIsSet_;
    std::vector<RuleResponse> rules_;
    bool rulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRulesResponse_H_
