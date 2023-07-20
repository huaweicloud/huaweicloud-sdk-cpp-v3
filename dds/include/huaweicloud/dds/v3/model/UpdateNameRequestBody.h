
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateNameRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateNameRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateNameRequestBody
    : public ModelBase
{
public:
    UpdateNameRequestBody();
    virtual ~UpdateNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateNameRequestBody members

    /// <summary>
    /// 新实例名称。用于表示实例的名称，允许和已有名称重复。取值范围：长度为4~64位，必须以字母开头（A~Z或a~z），区分大小写，可以包含字母、数字（0~9）、中划线（-）或者下划线（_），不能包含其他特殊字符。
    /// </summary>

    std::string getNewInstanceName() const;
    bool newInstanceNameIsSet() const;
    void unsetnewInstanceName();
    void setNewInstanceName(const std::string& value);


protected:
    std::string newInstanceName_;
    bool newInstanceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateNameRequestBody_H_
