
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ThirdPartyAssociatedResult_data.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项关联外部链接查询结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ThirdPartyAssociatedResult
    : public ModelBase
{
public:
    ThirdPartyAssociatedResult();
    virtual ~ThirdPartyAssociatedResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThirdPartyAssociatedResult members

    /// <summary>
    /// 
    /// </summary>

    ThirdPartyAssociatedResult_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const ThirdPartyAssociatedResult_data& value);

    /// <summary>
    /// 工作项关联外部链接总数。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);


protected:
    ThirdPartyAssociatedResult_data data_;
    bool dataIsSet_;
    std::string count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_H_
