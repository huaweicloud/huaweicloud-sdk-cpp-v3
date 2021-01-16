
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  CopyImageCrossRegionRequestBody
    : public ModelBase
{
public:
    CopyImageCrossRegionRequestBody();
    virtual ~CopyImageCrossRegionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyImageCrossRegionRequestBody members

    /// <summary>
    /// IMS服务委托名称。
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 镜像描述信息。支持字母、数字、中文等，不支持回车、&lt;、 &gt;，长度不能超过1024个字符。默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 目的区域的项目名称。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 目的区域的Region ID。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequestBody_H_
