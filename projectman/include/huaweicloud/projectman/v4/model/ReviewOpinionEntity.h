
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewOpinionEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewOpinionEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ReviewOpinionEntity
    : public ModelBase
{
public:
    ReviewOpinionEntity();
    virtual ~ReviewOpinionEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewOpinionEntity members

    /// <summary>
    /// 评审意见对象类型，固定为Opinion。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 评审意见对象关联的变更对象ID。
    /// </summary>

    std::string getCoId() const;
    bool coIdIsSet() const;
    void unsetcoId();
    void setCoId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 评审意见创建时间。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCurrOwner() const;
    bool currOwnerIsSet() const;
    void unsetcurrOwner();
    void setCurrOwner(const UserEntity& value);

    /// <summary>
    /// 评审意见对象ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审意见最后修改时间。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 评审意见。
    /// </summary>

    std::string getReviewComments() const;
    bool reviewCommentsIsSet() const;
    void unsetreviewComments();
    void setReviewComments(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string coId_;
    bool coIdIsSet_;
    UserEntity createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    UserEntity currOwner_;
    bool currOwnerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string reviewComments_;
    bool reviewCommentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewOpinionEntity_H_
