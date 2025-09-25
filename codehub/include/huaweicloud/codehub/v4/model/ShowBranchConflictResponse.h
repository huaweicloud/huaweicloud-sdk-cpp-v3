
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowBranchConflictResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowBranchConflictResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowBranchConflictResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBranchConflictResponse();
    virtual ~ShowBranchConflictResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchConflictResponse members

    /// <summary>
    /// 源仓库id
    /// </summary>

    int32_t getSourceRepositoryId() const;
    bool sourceRepositoryIdIsSet() const;
    void unsetsourceRepositoryId();
    void setSourceRepositoryId(int32_t value);

    /// <summary>
    /// 目标仓库id
    /// </summary>

    int32_t getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(int32_t value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 是否有冲突
    /// </summary>

    bool isIsConflict() const;
    bool isConflictIsSet() const;
    void unsetisConflict();
    void setIsConflict(bool value);


protected:
    int32_t sourceRepositoryId_;
    bool sourceRepositoryIdIsSet_;
    int32_t targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    bool isConflict_;
    bool isConflictIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowBranchConflictResponse_H_
