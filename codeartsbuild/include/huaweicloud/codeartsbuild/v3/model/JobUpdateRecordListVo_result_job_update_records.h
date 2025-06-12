
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_job_update_records_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_job_update_records_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobUpdateRecordListVo_result_job_update_records
    : public ModelBase
{
public:
    JobUpdateRecordListVo_result_job_update_records();
    virtual ~JobUpdateRecordListVo_result_job_update_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobUpdateRecordListVo_result_job_update_records members

    /// <summary>
    /// 修改编号
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 更新编号
    /// </summary>

    int32_t getUpdateNumber() const;
    bool updateNumberIsSet() const;
    void unsetupdateNumber();
    void setUpdateNumber(int32_t value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getUpdateType() const;
    bool updateTypeIsSet() const;
    void unsetupdateType();
    void setUpdateType(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t updateNumber_;
    bool updateNumberIsSet_;
    std::string updateType_;
    bool updateTypeIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_job_update_records_H_
