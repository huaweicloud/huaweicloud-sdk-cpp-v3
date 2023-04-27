
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigDeatil.h>
#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h>
#include <string>
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
/// 修改日志接入请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateAccessConfigRequestBody
    : public ModelBase
{
public:
    UpdateAccessConfigRequestBody();
    virtual ~UpdateAccessConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateAccessConfigRequestBody members

    /// <summary>
    /// 日志接入ID
    /// </summary>

    std::string getAccessConfigId() const;
    bool accessConfigIdIsSet() const;
    void unsetaccessConfigId();
    void setAccessConfigId(const std::string& value);

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
    AccessConfigDeatil accessConfigDetail_;
    bool accessConfigDetailIsSet_;
    AccessConfigHostGroupIdList hostGroupInfo_;
    bool hostGroupInfoIsSet_;
    std::vector<AccessConfigTag> accessConfigTag_;
    bool accessConfigTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
