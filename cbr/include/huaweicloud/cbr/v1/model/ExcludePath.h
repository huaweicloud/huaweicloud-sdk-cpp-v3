
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ExcludePath_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ExcludePath_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ExcludePath
    : public ModelBase
{
public:
    ExcludePath();
    virtual ~ExcludePath();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExcludePath members

    /// <summary>
    /// 备份目录
    /// </summary>

    std::string getPathName() const;
    bool pathNameIsSet() const;
    void unsetpathName();
    void setPathName(const std::string& value);

    /// <summary>
    /// 排除目录列表
    /// </summary>

    std::vector<std::string>& getExcludePathName();
    bool excludePathNameIsSet() const;
    void unsetexcludePathName();
    void setExcludePathName(const std::vector<std::string>& value);


protected:
    std::string pathName_;
    bool pathNameIsSet_;
    std::vector<std::string> excludePathName_;
    bool excludePathNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ExcludePath_H_
