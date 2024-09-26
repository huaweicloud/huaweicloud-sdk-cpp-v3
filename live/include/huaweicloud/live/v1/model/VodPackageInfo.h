
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodPackageInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodPackageInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// VOD 打包信息，包括DRM resourceID和转封装模板ID，模板ID通过VOD查询
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  VodPackageInfo
    : public ModelBase
{
public:
    VodPackageInfo();
    virtual ~VodPackageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VodPackageInfo members

    /// <summary>
    /// VOD 打包信息，转封装模板ID，模板ID通过VOD查询
    /// </summary>

    std::string getPackagingGroupId() const;
    bool packagingGroupIdIsSet() const;
    void unsetpackagingGroupId();
    void setPackagingGroupId(const std::string& value);

    /// <summary>
    /// DRM resourceID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string packagingGroupId_;
    bool packagingGroupIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodPackageInfo_H_
