
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainCountryStatResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainCountryStatResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainCountryStatResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainCountryStatResponse();
    virtual ~ShowDomainCountryStatResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainCountryStatResponse members

    /// <summary>
    /// **参数解释：** 查询数据类型 &gt; 汇总或明细数据  **取值范围：** - summary：查询汇总数据 - detail：查询数据详情
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询起始时间 **取值范围：** 相对于UTC 1970-01-01到当前时间相隔的毫秒数
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释：** 查询结束时间 **取值范围：** 相对于UTC 1970-01-01到当前时间相隔的毫秒数
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释：** 统计指标类型 **取值范围：** - flux：流量 - req_num：请求总数
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// **参数解释：** 按指定的分组方式组织的数据 **取值范围：** - domain：按域名分组 - country：按国际&amp;地区分组 - province：按省份分组 - isp：按运营商分组 **默认取值：** 默认不分组
    /// </summary>

    std::map<std::string, Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, Object>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::map<std::string, Object> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainCountryStatResponse_H_
