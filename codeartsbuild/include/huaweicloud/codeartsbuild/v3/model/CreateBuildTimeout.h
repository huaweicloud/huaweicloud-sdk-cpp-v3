
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildTimeout_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildTimeout_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建任务超时时间
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateBuildTimeout
    : public ModelBase
{
public:
    CreateBuildTimeout();
    virtual ~CreateBuildTimeout();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBuildTimeout members

    /// <summary>
    /// 超时时间数值
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 超时时间单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildTimeout_H_
