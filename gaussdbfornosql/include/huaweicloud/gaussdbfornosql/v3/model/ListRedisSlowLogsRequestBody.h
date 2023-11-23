
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisSlowLogsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisSlowLogsRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListRedisSlowLogsRequestBody
    : public ModelBase
{
public:
    ListRedisSlowLogsRequestBody();
    virtual ~ListRedisSlowLogsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRedisSlowLogsRequestBody members

    /// <summary>
    /// 开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。注：开始时间不得早于当前时间30天。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。注：结束时间不能晚于当前时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 表示每次查询的日志条数，最大限制100条。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 日志单行序列号，第一次查询时不需要此参数，下一次查询时需要使用，可从上一次查询的返回信息中获取。 说明：当次查询从line_num的下一条日志开始查询，不包含当前line_num日志。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 语句类型，取空值，表示查询所有语句类型。支持查询的所有语句类型如下（以\&quot;|\&quot;分割）： set|get|del|incr|incrby|incrbyfloat|decr|decrby|getset|append|mget|keys|setnx|setex|psetex|delvx|mset| msetnx|getrange|substr|setrange|strlen|exists|expire|pexpire|expireat|pexpireat|ttl|pttl|persist|type| scanx|pksetexat|sort|hdel|hset|hget|hgetall|hexists|hincrby|hincrbyfloat|hkeys|hlen|hmget|hmset|hsetnx| hstrlen|hvals|hscan|hscanx|pkhscanrange|pkhrscanrange|lindex|linsert|llen|lpop|lpush|lpushx|lrange|lrem| lset|ltrim|rpop|rpoplpush|rpush|rpushx|zadd|zcard|zscan|zincrby|zrange|zrevrange|zrangebyscore| zrevrangebyscore|zcount|zrem|zunionstore|zinterstore|zrank|zrevrank|zscore|zrangebylex|zrevrangebylex| zlexcount|zremrangebyrank|zremrangebyscore|zremrangebylex|zpopmax|zpopmin|sadd|spop|scard|smembers|sscan| srem|sunion|sunionstore|sinter|sinterstore|sismember|sdiff|sdiffstore|smove|srandmember|bitset|bitget| bitcount|bitpos|bitop|bitfield|pfadd|pfcount|pfmerge|geoadd|georadiusbymember|georadius|geohash|geodist| geopos|xadd|xack|xgroup|xdel|xtrim|xlen|xrange|xrevrange|xclaim|xpending|xinfo|xread|xreadgroup|
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 节点ID，取空值，表示查询实例下所有允许查询的节点。 具体取值请参考查询实例列表和详情接口\&quot;ListInstances\&quot;中nodes字段数据结构说明的“id”。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 根据多个关键字搜索日志全文，表示同时匹配所有关键字。 - 最多支持10个关键字。 - 每个关键字最大长度不超过512个字符。
    /// </summary>

    std::vector<std::string>& getKeywords();
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::vector<std::string>& value);

    /// <summary>
    /// 支持根据最大执行时间范围查找日志。单位：ms
    /// </summary>

    double getMaxCostTime() const;
    bool maxCostTimeIsSet() const;
    void unsetmaxCostTime();
    void setMaxCostTime(double value);

    /// <summary>
    /// 支持根据最小执行时间范围查找日志。单位：ms
    /// </summary>

    double getMinCostTime() const;
    bool minCostTimeIsSet() const;
    void unsetminCostTime();
    void setMinCostTime(double value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<std::string> keywords_;
    bool keywordsIsSet_;
    double maxCostTime_;
    bool maxCostTimeIsSet_;
    double minCostTime_;
    bool minCostTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisSlowLogsRequestBody_H_
