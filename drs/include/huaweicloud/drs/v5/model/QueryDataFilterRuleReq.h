
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDataFilterRuleReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDataFilterRuleReq_H_


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
/// 查询数据过滤规则请求
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDataFilterRuleReq
    : public ModelBase
{
public:
    QueryDataFilterRuleReq();
    virtual ~QueryDataFilterRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDataFilterRuleReq members

    /// <summary>
    /// 数据过滤类型，取值分别是common、config。common表示简单条件过滤， config表示关联表过滤
    /// </summary>

    std::string getFilterType() const;
    bool filterTypeIsSet() const;
    void unsetfilterType();
    void setFilterType(const std::string& value);

    /// <summary>
    /// 标记是否查询全部过滤规则（含已同步和未下发的），即 true（查询所有）、false（仅查询已同步）
    /// </summary>

    bool isIsAllRules() const;
    bool isAllRulesIsSet() const;
    void unsetisAllRules();
    void setIsAllRules(bool value);

    /// <summary>
    /// 查询返回记录的数量限制。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示查询该偏移量后面的记录。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string filterType_;
    bool filterTypeIsSet_;
    bool isAllRules_;
    bool isAllRulesIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDataFilterRuleReq_H_
