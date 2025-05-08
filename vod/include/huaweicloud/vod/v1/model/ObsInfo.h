
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObsInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObsInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ObsInfo
    : public ModelBase
{
public:
    ObsInfo();
    virtual ~ObsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsInfo members

    /// <summary>
    /// OBS的bucket名称
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// OBS对象路径
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 桶所在区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObsInfo_H_
