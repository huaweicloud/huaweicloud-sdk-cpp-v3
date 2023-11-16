
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PeruIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PeruIdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  PeruIdCardResult
    : public ModelBase
{
public:
    PeruIdCardResult();
    virtual ~PeruIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PeruIdCardResult members

    /// <summary>
    /// 身份证号。
    /// </summary>

    std::string getCuiNumber() const;
    bool cuiNumberIsSet() const;
    void unsetcuiNumber();
    void setCuiNumber(const std::string& value);

    /// <summary>
    /// 第一姓氏。
    /// </summary>

    std::string getFirstSurname() const;
    bool firstSurnameIsSet() const;
    void unsetfirstSurname();
    void setFirstSurname(const std::string& value);

    /// <summary>
    /// 第二姓氏。
    /// </summary>

    std::string getSecondSurname() const;
    bool secondSurnameIsSet() const;
    void unsetsecondSurname();
    void setSecondSurname(const std::string& value);

    /// <summary>
    /// 名。
    /// </summary>

    std::string getGivenName() const;
    bool givenNameIsSet() const;
    void unsetgivenName();
    void setGivenName(const std::string& value);

    /// <summary>
    /// 性别。
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 婚姻状况。
    /// </summary>

    std::string getMaritalStatus() const;
    bool maritalStatusIsSet() const;
    void unsetmaritalStatus();
    void setMaritalStatus(const std::string& value);

    /// <summary>
    /// 出生日期。
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 国籍。
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 发行日期。
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 失效日期。
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 出生地编码。
    /// </summary>

    std::string getBirthPlace() const;
    bool birthPlaceIsSet() const;
    void unsetbirthPlace();
    void setBirthPlace(const std::string& value);

    /// <summary>
    /// 投票组。
    /// </summary>

    std::string getVotingGroup() const;
    bool votingGroupIsSet() const;
    void unsetvotingGroup();
    void setVotingGroup(const std::string& value);

    /// <summary>
    /// 器官捐赠意愿。
    /// </summary>

    std::string getOrganDonation() const;
    bool organDonationIsSet() const;
    void unsetorganDonation();
    void setOrganDonation(const std::string& value);

    /// <summary>
    /// 注册日期。
    /// </summary>

    std::string getRegistrationDate() const;
    bool registrationDateIsSet() const;
    void unsetregistrationDate();
    void setRegistrationDate(const std::string& value);

    /// <summary>
    /// 头像的base64编码。当输入参数“return_portrait_image”为“true”时，才返回该参数。
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 大区。
    /// </summary>

    std::string getDepartment() const;
    bool departmentIsSet() const;
    void unsetdepartment();
    void setDepartment(const std::string& value);

    /// <summary>
    /// 省。
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 区。
    /// </summary>

    std::string getDistrict() const;
    bool districtIsSet() const;
    void unsetdistrict();
    void setDistrict(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 机器码第一行。
    /// </summary>

    std::string getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(const std::string& value);

    /// <summary>
    /// 机器码第二行。
    /// </summary>

    std::string getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(const std::string& value);

    /// <summary>
    /// 机器码第三行。
    /// </summary>

    std::string getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(const std::string& value);

    /// <summary>
    /// 是否重新登记过。可选值如下所示： -  true: 已重新登记过 -  false: 未重新登记过 
    /// </summary>

    bool isDuplicate() const;
    bool duplicateIsSet() const;
    void unsetduplicate();
    void setDuplicate(bool value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。注：置信度由算法给出，不直接等价于对应字段的准确率。
    /// </summary>

    std::map<std::string, float>& getConfidence();
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(std::map<std::string, float> value);


protected:
    std::string cuiNumber_;
    bool cuiNumberIsSet_;
    std::string firstSurname_;
    bool firstSurnameIsSet_;
    std::string secondSurname_;
    bool secondSurnameIsSet_;
    std::string givenName_;
    bool givenNameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string maritalStatus_;
    bool maritalStatusIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string birthPlace_;
    bool birthPlaceIsSet_;
    std::string votingGroup_;
    bool votingGroupIsSet_;
    std::string organDonation_;
    bool organDonationIsSet_;
    std::string registrationDate_;
    bool registrationDateIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string department_;
    bool departmentIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string district_;
    bool districtIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    std::string machineCode1_;
    bool machineCode1IsSet_;
    std::string machineCode2_;
    bool machineCode2IsSet_;
    std::string machineCode3_;
    bool machineCode3IsSet_;
    bool duplicate_;
    bool duplicateIsSet_;
    std::map<std::string, float> confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PeruIdCardResult_H_
