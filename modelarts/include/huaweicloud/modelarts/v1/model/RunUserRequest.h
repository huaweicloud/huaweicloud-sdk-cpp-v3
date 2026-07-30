
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启动用户、启动用户组设置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RunUserRequest
    : public ModelBase
{
public:
    RunUserRequest();
    virtual ~RunUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunUserRequest members

    /// <summary>
    /// 容器启动用户的user id
    /// </summary>

    int32_t getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(int32_t value);

    /// <summary>
    /// 容器启动用户的group id
    /// </summary>

    int32_t getGid() const;
    bool gidIsSet() const;
    void unsetgid();
    void setGid(int32_t value);


protected:
    int32_t uid_;
    bool uidIsSet_;
    int32_t gid_;
    bool gidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserRequest_H_
