
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigDeatil.h>
#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h>
#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigQueryLogInfo.h>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateAccessConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAccessConfigResponse();
    virtual ~CreateAccessConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateAccessConfigResponse members

    /// <summary>
    /// 日志接入ID
    /// </summary>

    std::string getAccessConfigId() const;
    bool accessConfigIdIsSet() const;
    void unsetaccessConfigId();
    void setAccessConfigId(const std::string& value);

    /// <summary>
    /// 日志接入名称
    /// </summary>

    std::string getAccessConfigName() const;
    bool accessConfigNameIsSet() const;
    void unsetaccessConfigName();
    void setAccessConfigName(const std::string& value);

    /// <summary>
    /// 日志接入类型。AGENT：主机接入
    /// </summary>

    std::string getAccessConfigType() const;
    bool accessConfigTypeIsSet() const;
    void unsetaccessConfigType();
    void setAccessConfigType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigDeatil getAccessConfigDetail() const;
    bool accessConfigDetailIsSet() const;
    void unsetaccessConfigDetail();
    void setAccessConfigDetail(const AccessConfigDeatil& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigQueryLogInfo getLogInfo() const;
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const AccessConfigQueryLogInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigHostGroupIdList getHostGroupInfo() const;
    bool hostGroupInfoIsSet() const;
    void unsethostGroupInfo();
    void setHostGroupInfo(const AccessConfigHostGroupIdList& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<AccessConfigTag>& getAccessConfigTag();
    bool accessConfigTagIsSet() const;
    void unsetaccessConfigTag();
    void setAccessConfigTag(const std::vector<AccessConfigTag>& value);


protected:
    std::string accessConfigId_;
    bool accessConfigIdIsSet_;
    std::string accessConfigName_;
    bool accessConfigNameIsSet_;
    std::string accessConfigType_;
    bool accessConfigTypeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    AccessConfigDeatil accessConfigDetail_;
    bool accessConfigDetailIsSet_;
    AccessConfigQueryLogInfo logInfo_;
    bool logInfoIsSet_;
    AccessConfigHostGroupIdList hostGroupInfo_;
    bool hostGroupInfoIsSet_;
    std::vector<AccessConfigTag> accessConfigTag_;
    bool accessConfigTagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigResponse_H_
