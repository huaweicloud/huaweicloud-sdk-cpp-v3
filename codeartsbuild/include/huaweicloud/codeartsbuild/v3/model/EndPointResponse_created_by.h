
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_created_by_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_created_by_H_


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
/// 创建者
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  EndPointResponse_created_by
    : public ModelBase
{
public:
    EndPointResponse_created_by();
    virtual ~EndPointResponse_created_by();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndPointResponse_created_by members

    /// <summary>
    /// 创建者用户名
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 创建者用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_created_by_H_
