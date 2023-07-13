
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LogStream_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LogStream_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 返回的日志流信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LogStream
    : public ModelBase
{
public:
    LogStream();
    virtual ~LogStream();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LogStream members

    /// <summary>
    /// 创建时间 
    /// </summary>

    int64_t getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(int64_t value);

    /// <summary>
    /// 日志流名称 
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 日志流ID 
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 过滤器个数 
    /// </summary>

    int32_t getFilterCount() const;
    bool filterCountIsSet() const;
    void unsetfilterCount();
    void setFilterCount(int32_t value);

    /// <summary>
    /// 日志流所属标签
    /// </summary>

    std::map<std::string, std::string>& getTag();
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 是否收藏日志流
    /// </summary>

    bool isIsFavorite() const;
    bool isFavoriteIsSet() const;
    void unsetisFavorite();
    void setIsFavorite(bool value);


protected:
    int64_t creationTime_;
    bool creationTimeIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    int32_t filterCount_;
    bool filterCountIsSet_;
    std::map<std::string, std::string> tag_;
    bool tagIsSet_;
    bool isFavorite_;
    bool isFavoriteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LogStream_H_
