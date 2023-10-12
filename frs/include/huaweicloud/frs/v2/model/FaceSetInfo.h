
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetInfo_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetInfo_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  FaceSetInfo
    : public ModelBase
{
public:
    FaceSetInfo();
    virtual ~FaceSetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FaceSetInfo members

    /// <summary>
    /// 人脸库当中的人脸数量。
    /// </summary>

    int32_t getFaceNumber() const;
    bool faceNumberIsSet() const;
    void unsetfaceNumber();
    void setFaceNumber(int32_t value);

    /// <summary>
    /// 用户的自定义字段。
    /// </summary>

    Object getExternalFields() const;
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const Object& value);

    /// <summary>
    /// 人脸库ID，随机生成的包含八个字符的字符串。
    /// </summary>

    std::string getFaceSetId() const;
    bool faceSetIdIsSet() const;
    void unsetfaceSetId();
    void setFaceSetId(const std::string& value);

    /// <summary>
    /// 人脸库名称。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateDate() const;
    bool createDateIsSet() const;
    void unsetcreateDate();
    void setCreateDate(const std::string& value);

    /// <summary>
    /// 人脸库最大的容量。
    /// </summary>

    int32_t getFaceSetCapacity() const;
    bool faceSetCapacityIsSet() const;
    void unsetfaceSetCapacity();
    void setFaceSetCapacity(int32_t value);


protected:
    int32_t faceNumber_;
    bool faceNumberIsSet_;
    Object externalFields_;
    bool externalFieldsIsSet_;
    std::string faceSetId_;
    bool faceSetIdIsSet_;
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    std::string createDate_;
    bool createDateIsSet_;
    int32_t faceSetCapacity_;
    bool faceSetCapacityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSetInfo_H_
