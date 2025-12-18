
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVisionActiveCodeResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVisionActiveCodeResultDTO_H_


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
/// 激活码信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryVisionActiveCodeResultDTO
    : public ModelBase
{
public:
    QueryVisionActiveCodeResultDTO();
    virtual ~QueryVisionActiveCodeResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryVisionActiveCodeResultDTO members

    /// <summary>
    /// 激活码唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 激活码。
    /// </summary>

    std::string getActiveCode() const;
    bool activeCodeIsSet() const;
    void unsetactiveCode();
    void setActiveCode(const std::string& value);

    /// <summary>
    /// 终端名称。
    /// </summary>

    std::string getDevName() const;
    bool devNameIsSet() const;
    void unsetdevName();
    void setDevName(const std::string& value);

    /// <summary>
    /// 终端类型。
    /// </summary>

    std::string getDevType() const;
    bool devTypeIsSet() const;
    void unsetdevType();
    void setDevType(const std::string& value);

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

    /// <summary>
    /// 失效时间戳。
    /// </summary>

    int64_t getExpireDate() const;
    bool expireDateIsSet() const;
    void unsetexpireDate();
    void setExpireDate(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string activeCode_;
    bool activeCodeIsSet_;
    std::string devName_;
    bool devNameIsSet_;
    std::string devType_;
    bool devTypeIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    int64_t expireDate_;
    bool expireDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVisionActiveCodeResultDTO_H_
