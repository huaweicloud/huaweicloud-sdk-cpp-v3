
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareUserInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareUserInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CompareUserInfo
    : public ModelBase
{
public:
    CompareUserInfo();
    virtual ~CompareUserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareUserInfo members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 源数据库账号名称
    /// </summary>

    std::string getSrcUserName() const;
    bool srcUserNameIsSet() const;
    void unsetsrcUserName();
    void setSrcUserName(const std::string& value);

    /// <summary>
    /// 目标数据库账号名称
    /// </summary>

    std::string getTarUserName() const;
    bool tarUserNameIsSet() const;
    void unsettarUserName();
    void setTarUserName(const std::string& value);

    /// <summary>
    /// 源数据库账号权限
    /// </summary>

    std::string getSrcPrivileges() const;
    bool srcPrivilegesIsSet() const;
    void unsetsrcPrivileges();
    void setSrcPrivileges(const std::string& value);

    /// <summary>
    /// 目标数据库账号权限
    /// </summary>

    std::string getTarPrivileges() const;
    bool tarPrivilegesIsSet() const;
    void unsettarPrivileges();
    void setTarPrivileges(const std::string& value);

    /// <summary>
    /// 目标端是否存在，取值： - false：不存在 - true：存在
    /// </summary>

    bool isIsTargetExisted() const;
    bool isTargetExistedIsSet() const;
    void unsetisTargetExisted();
    void setIsTargetExisted(bool value);

    /// <summary>
    /// 对比结果，取值： - INCONSISTENT：不一致 - UNABLE_TO_COMPARE：无法比对 - CONSISTENT：一致 - TARGET_SCHEMA_NOT_EXIST：目标库不存在 - COMPARE_FAILED：比对失败 - COMPARING：比对中 - WAITING_COMPARE：等待比对 - UNKNOWN：未知错误
    /// </summary>

    int32_t getCompareResult() const;
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string srcUserName_;
    bool srcUserNameIsSet_;
    std::string tarUserName_;
    bool tarUserNameIsSet_;
    std::string srcPrivileges_;
    bool srcPrivilegesIsSet_;
    std::string tarPrivileges_;
    bool tarPrivilegesIsSet_;
    bool isTargetExisted_;
    bool isTargetExistedIsSet_;
    int32_t compareResult_;
    bool compareResultIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareUserInfo_H_
