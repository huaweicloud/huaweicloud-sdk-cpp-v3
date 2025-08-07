
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedPrincipal_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedPrincipal_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 描述共享的不同角色。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  DistinctSharedPrincipal
    : public ModelBase
{
public:
    DistinctSharedPrincipal();
    virtual ~DistinctSharedPrincipal();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DistinctSharedPrincipal members

    /// <summary>
    /// 资源共享实例的创建者或使用者的账号ID或URN。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 最后一次更新资源共享实例的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_DistinctSharedPrincipal_H_
