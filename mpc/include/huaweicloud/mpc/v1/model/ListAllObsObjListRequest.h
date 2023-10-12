
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListAllObsObjListRequest
    : public ModelBase
{
public:
    ListAllObsObjListRequest();
    virtual ~ListAllObsObjListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllObsObjListRequest members

    /// <summary>
    /// 桶名
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 查询对象前缀
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// 查询对象文件类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAllObsObjListRequest& dereference_from_shared_ptr(std::shared_ptr<ListAllObsObjListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListRequest_H_
