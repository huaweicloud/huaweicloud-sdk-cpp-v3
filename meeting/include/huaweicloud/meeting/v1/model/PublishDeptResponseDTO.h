
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeptResponseDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeptResponseDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布的部门信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PublishDeptResponseDTO
    : public ModelBase
{
public:
    PublishDeptResponseDTO();
    virtual ~PublishDeptResponseDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishDeptResponseDTO members

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);


protected:
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeptResponseDTO_H_
