
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListTracesRequest
    : public ModelBase
{
public:
    ListTracesRequest();
    virtual ~ListTracesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTracesRequest members

    /// <summary>
    /// 标识审计事件类型。 目前支持管理类事件（system）和数据类事件（data）。 默认值为\&quot;system\&quot;。
    /// </summary>

    std::string getTraceType() const;
    bool traceTypeIsSet() const;
    void unsettraceType();
    void setTraceType(const std::string& value);

    /// <summary>
    /// 标示查询事件列表中限定返回的事件条数。不传时默认10条，最大值200条。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 标识查询事件列表的起始时间戳（timestamp，为标准UTC时间，毫秒级，13位数字，不包括传入时间）默认为上一小时的时间戳。查询条件from与to配套使用。
    /// </summary>

    int64_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(int64_t value);

    /// <summary>
    /// 取值为响应中中marker的值，用于标识查询事件的起始时间（自此条事件的记录时间起，向更早时间查询）。 可以与“from”、“to”结合使用。 最终的查询条件取两组时间条件的交集。
    /// </summary>

    std::string getNext() const;
    bool nextIsSet() const;
    void unsetnext();
    void setNext(const std::string& value);

    /// <summary>
    /// 标识查询事件列表的结束时间戳（timestamp，为标准UTC时间，毫秒级，13位数字，不包括传入时间）默认为当前时间戳。查询条件to与from配套使用。
    /// </summary>

    int64_t getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(int64_t value);

    /// <summary>
    /// 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段值默认为\&quot;system\&quot;。 当\&quot;trace_type\&quot;字段值为\&quot;data\&quot;时，该字段值可以传入数据类追踪器名称，达到筛选某个数据类追踪器下的数据事件目的。
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 标识查询事件列表对应的云服务类型。必须为已对接CTS的云服务的英文缩写，且服务类型一般为大写字母。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。 已对接的云服务列表参见《云审计服务用户指南》“支持的服务”章节。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 标识特定用户名称，用以查询该用户下的所有事件。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 标示查询事件列表对应的云服务资源ID。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 标示查询事件列表对应的的资源名称。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。 说明：该字段可能包含大写字母。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 标示查询事件列表对应的资源类型。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 标示某一条事件的事件ID。当传入这个查询条件时，其他查询条件自动不生效。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 标示查询事件列表对应的事件名称。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。 说明：该字段可能包含大写字母。
    /// </summary>

    std::string getTraceName() const;
    bool traceNameIsSet() const;
    void unsettraceName();
    void setTraceName(const std::string& value);

    /// <summary>
    /// 标示查询事件列表对应的事件等级目前有三种：正常(normal), 警告(warning),事故(incident)。 当\&quot;trace_type\&quot;字段值为\&quot;system\&quot;时，该字段筛选有效\&quot;。
    /// </summary>

    std::string getTraceRating() const;
    bool traceRatingIsSet() const;
    void unsettraceRating();
    void setTraceRating(const std::string& value);


protected:
    std::string traceType_;
    bool traceTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int64_t from_;
    bool fromIsSet_;
    std::string next_;
    bool nextIsSet_;
    int64_t to_;
    bool toIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string traceName_;
    bool traceNameIsSet_;
    std::string traceRating_;
    bool traceRatingIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTracesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTracesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesRequest_H_
