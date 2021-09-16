
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetReq_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/frs/v2/model/TypeInfo.h>
#include <map>
#include <vector>

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
class HUAWEICLOUD_FRS_V2_EXPORT  CreateFaceSetReq
    : public ModelBase
{
public:
    CreateFaceSetReq();
    virtual ~CreateFaceSetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateFaceSetReq members

    /// <summary>
    /// 用户自定义数据，自定义字段不能以系统保留字段vector、bounding_box、external_image_id、face_id、create_time、_id、_all、_source等字段命名。 Json字符串不校验重复性，自定义字段的key值长度范围为[1,36]，string类型的value长度范围为[1,256]，具体参见[自定义字段](https://support.huaweicloud.com/api-face/face_02_0012.html)。
    /// </summary>

    std::map<std::string, TypeInfo>& getExternalFields();
    bool externalFieldsIsSet() const;
    void unsetexternalFields();
    void setExternalFields(const std::map<std::string, TypeInfo>& value);

    /// <summary>
    /// 人脸库名称。 建议人脸库的名称不要以下划线（_）开头，否则云监控服务会无法采集人脸数量。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// 人脸库最大的容量，填写1万整数倍的数字，例如：30000。 默认为100000，最大值为100000，可通过创建新的人脸库进行扩容，每个用户可免费默认使用10个人脸库，每个人脸库容量为10万个人脸特征。如需扩容单个人脸库规模，请联系华为云客服确认扩容规模与价格。
    /// </summary>

    int32_t getFaceSetCapacity() const;
    bool faceSetCapacityIsSet() const;
    void unsetfaceSetCapacity();
    void setFaceSetCapacity(int32_t value);


protected:
    std::map<std::string, TypeInfo> externalFields_;
    bool externalFieldsIsSet_;
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    int32_t faceSetCapacity_;
    bool faceSetCapacityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetReq_H_
