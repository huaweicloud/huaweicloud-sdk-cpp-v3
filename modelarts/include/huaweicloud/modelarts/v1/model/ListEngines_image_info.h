
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEngines_image_info_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEngines_image_info_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 引擎具体信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListEngines_image_info
    : public ModelBase
{
public:
    ListEngines_image_info();
    virtual ~ListEngines_image_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEngines_image_info members

    /// <summary>
    /// cpu规格下对应镜像。
    /// </summary>

    std::string getCpuImageUrl() const;
    bool cpuImageUrlIsSet() const;
    void unsetcpuImageUrl();
    void setCpuImageUrl(const std::string& value);

    /// <summary>
    /// gpu[或者Ascend](tag:hc,hk,fcs_super)规格下对应镜像。
    /// </summary>

    std::string getGpuImageUrl() const;
    bool gpuImageUrlIsSet() const;
    void unsetgpuImageUrl();
    void setGpuImageUrl(const std::string& value);

    /// <summary>
    /// 镜像版本。
    /// </summary>

    std::string getImageVersion() const;
    bool imageVersionIsSet() const;
    void unsetimageVersion();
    void setImageVersion(const std::string& value);


protected:
    std::string cpuImageUrl_;
    bool cpuImageUrlIsSet_;
    std::string gpuImageUrl_;
    bool gpuImageUrlIsSet_;
    std::string imageVersion_;
    bool imageVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEngines_image_info_H_
