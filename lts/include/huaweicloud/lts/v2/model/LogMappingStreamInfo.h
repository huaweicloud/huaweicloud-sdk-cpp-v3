
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingStreamInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingStreamInfo_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  LogMappingStreamInfo
    : public ModelBase
{
public:
    LogMappingStreamInfo();
    virtual ~LogMappingStreamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LogMappingStreamInfo members

    /// <summary>
    /// 源日志流ID
    /// </summary>

    std::string getSourceLogStreamId() const;
    bool sourceLogStreamIdIsSet() const;
    void unsetsourceLogStreamId();
    void setSourceLogStreamId(const std::string& value);

    /// <summary>
    /// 目标日志流ID
    /// </summary>

    std::string getTargetLogStreamId() const;
    bool targetLogStreamIdIsSet() const;
    void unsettargetLogStreamId();
    void setTargetLogStreamId(const std::string& value);

    /// <summary>
    /// 目标日志流名称
    /// </summary>

    std::string getTargetLogStreamName() const;
    bool targetLogStreamNameIsSet() const;
    void unsettargetLogStreamName();
    void setTargetLogStreamName(const std::string& value);

    /// <summary>
    /// 目标日志流EPS ID
    /// </summary>

    std::string getTargetLogStreamEpsId() const;
    bool targetLogStreamEpsIdIsSet() const;
    void unsettargetLogStreamEpsId();
    void setTargetLogStreamEpsId(const std::string& value);

    /// <summary>
    /// 目标日志流ttl
    /// </summary>

    int32_t getTargetLogStreamTtl() const;
    bool targetLogStreamTtlIsSet() const;
    void unsettargetLogStreamTtl();
    void setTargetLogStreamTtl(int32_t value);


protected:
    std::string sourceLogStreamId_;
    bool sourceLogStreamIdIsSet_;
    std::string targetLogStreamId_;
    bool targetLogStreamIdIsSet_;
    std::string targetLogStreamName_;
    bool targetLogStreamNameIsSet_;
    std::string targetLogStreamEpsId_;
    bool targetLogStreamEpsIdIsSet_;
    int32_t targetLogStreamTtl_;
    bool targetLogStreamTtlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingStreamInfo_H_
