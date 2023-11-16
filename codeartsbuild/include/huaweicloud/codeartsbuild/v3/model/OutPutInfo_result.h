
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OutPutInfo_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OutPutInfo_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/OutPutResult.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  OutPutInfo_result
    : public ModelBase
{
public:
    OutPutInfo_result();
    virtual ~OutPutInfo_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutPutInfo_result members

    /// <summary>
    /// 
    /// </summary>

    OutPutResult getPackageInfo() const;
    bool packageInfoIsSet() const;
    void unsetpackageInfo();
    void setPackageInfo(const OutPutResult& value);

    /// <summary>
    /// 二方包信息
    /// </summary>

    std::map<std::string, OutPutResult>& getPackageInfos();
    bool packageInfosIsSet() const;
    void unsetpackageInfos();
    void setPackageInfos(const std::map<std::string, OutPutResult>& value);

    /// <summary>
    /// 镜像包信息
    /// </summary>

    std::map<std::string, OutPutResult>& getImageInfos();
    bool imageInfosIsSet() const;
    void unsetimageInfos();
    void setImageInfos(const std::map<std::string, OutPutResult>& value);


protected:
    OutPutResult packageInfo_;
    bool packageInfoIsSet_;
    std::map<std::string, OutPutResult> packageInfos_;
    bool packageInfosIsSet_;
    std::map<std::string, OutPutResult> imageInfos_;
    bool imageInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_OutPutInfo_result_H_
