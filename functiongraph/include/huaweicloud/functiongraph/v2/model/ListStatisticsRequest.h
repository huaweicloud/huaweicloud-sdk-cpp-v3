
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListStatisticsRequest
    : public ModelBase
{
public:
    ListStatisticsRequest();
    virtual ~ListStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStatisticsRequest members

    /// <summary>
    /// 参数过滤器。 monitor_data: 查询统计信息。 monthly_report：查询月度统计信息。
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// 时间段单位为分钟，与filter参数metric配合使用。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 月度统计的维度，filter参数取值为monthly_report时才生效。 当取值不在以上范围时，默认取\&quot;0\&quot;。 - \&quot;0\&quot;: 表示统计本月。 - \&quot;1\&quot;: 表示统计上月。 - \&quot;2\&quot;: 表示统计最近三个月。 - \&quot;3\&quot;: 表示统计最近六个月。
    /// </summary>

    std::string getOption() const;
    bool optionIsSet() const;
    void unsetoption();
    void setOption(const std::string& value);

    /// <summary>
    /// 本次查询最大返回的数据条数，最大值500，默认值100
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 本次查询起始位置，默认值0
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string filter_;
    bool filterIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string option_;
    bool optionIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsRequest_H_
