
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/RuleListItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListRulesResponse
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
    /// 规则信息
    /// </summary>

    std::vector<RuleListItem>& getInfo();
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::vector<RuleListItem>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<RuleListItem> info_;
    bool infoIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListRulesResponse_H_
