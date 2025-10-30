
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponseBody1_log_streams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponseBody1_log_streams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogStreamsResponseBody1_log_streams
    : public ModelBase
{
public:
    ListLogStreamsResponseBody1_log_streams();
    virtual ~ListLogStreamsResponseBody1_log_streams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogStreamsResponseBody1_log_streams members

    /// <summary>
    /// 日志流创建时间
    /// </summary>

    int64_t getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(int64_t value);

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 日志流别名
    /// </summary>

    std::string getLogStreamNameAlias() const;
    bool logStreamNameAliasIsSet() const;
    void unsetlogStreamNameAlias();
    void setLogStreamNameAlias(const std::string& value);

    /// <summary>
    /// 日志流所属标签
    /// </summary>

    std::map<std::string, std::string>& getTag();
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 过滤器个数
    /// </summary>

    int32_t getFilterCount() const;
    bool filterCountIsSet() const;
    void unsetfilterCount();
    void setFilterCount(int32_t value);

    /// <summary>
    /// 是否日志存储
    /// </summary>

    bool isWhetherLogStorage() const;
    bool whetherLogStorageIsSet() const;
    void unsetwhetherLogStorage();
    void setWhetherLogStorage(bool value);

    /// <summary>
    /// 是否冷存储
    /// </summary>

    bool isHotColdSeparation() const;
    bool hotColdSeparationIsSet() const;
    void unsethotColdSeparation();
    void setHotColdSeparation(bool value);

    /// <summary>
    /// 匿名写入开关
    /// </summary>

    bool isAuthWebTracking() const;
    bool authWebTrackingIsSet() const;
    void unsetauthWebTracking();
    void setAuthWebTracking(bool value);

    /// <summary>
    /// 存储时间
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 标准存储时间
    /// </summary>

    int32_t getHotStorageDays() const;
    bool hotStorageDaysIsSet() const;
    void unsethotStorageDays();
    void setHotStorageDays(int32_t value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否收藏日志流。 **取值范围：** - true：收藏日志流。 - false：不收藏日志流。
    /// </summary>

    bool isIsFavorite() const;
    bool isFavoriteIsSet() const;
    void unsetisFavorite();
    void setIsFavorite(bool value);


protected:
    int64_t creationTime_;
    bool creationTimeIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logStreamNameAlias_;
    bool logStreamNameAliasIsSet_;
    std::map<std::string, std::string> tag_;
    bool tagIsSet_;
    int32_t filterCount_;
    bool filterCountIsSet_;
    bool whetherLogStorage_;
    bool whetherLogStorageIsSet_;
    bool hotColdSeparation_;
    bool hotColdSeparationIsSet_;
    bool authWebTracking_;
    bool authWebTrackingIsSet_;
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    int32_t hotStorageDays_;
    bool hotStorageDaysIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    bool isFavorite_;
    bool isFavoriteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogStreamsResponseBody1_log_streams_H_
