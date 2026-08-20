
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_status_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_status_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 评审单状态
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result_status
    : public ModelBase
{
public:
    ProcessInstanceResponse_result_status();
    virtual ~ProcessInstanceResponse_result_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result_status members

    /// <summary>
    /// 状态码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_status_H_
