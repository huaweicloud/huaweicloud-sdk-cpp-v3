
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingLogStreamInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingLogStreamInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  AomMappingLogStreamInfo
    : public ModelBase
{
public:
    AomMappingLogStreamInfo();
    virtual ~AomMappingLogStreamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AomMappingLogStreamInfo members

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getTargetLogGroupId() const;
    bool targetLogGroupIdIsSet() const;
    void unsettargetLogGroupId();
    void setTargetLogGroupId(const std::string& value);

    /// <summary>
    /// 目标日志组名称。
    /// </summary>

    std::string getTargetLogGroupName() const;
    bool targetLogGroupNameIsSet() const;
    void unsettargetLogGroupName();
    void setTargetLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getTargetLogStreamId() const;
    bool targetLogStreamIdIsSet() const;
    void unsettargetLogStreamId();
    void setTargetLogStreamId(const std::string& value);

    /// <summary>
    /// 目标日志组名称。
    /// </summary>

    std::string getTargetLogStreamName() const;
    bool targetLogStreamNameIsSet() const;
    void unsettargetLogStreamName();
    void setTargetLogStreamName(const std::string& value);


protected:
    std::string targetLogGroupId_;
    bool targetLogGroupIdIsSet_;
    std::string targetLogGroupName_;
    bool targetLogGroupNameIsSet_;
    std::string targetLogStreamId_;
    bool targetLogStreamIdIsSet_;
    std::string targetLogStreamName_;
    bool targetLogStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingLogStreamInfo_H_
